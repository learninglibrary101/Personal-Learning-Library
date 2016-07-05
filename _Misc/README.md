#### Continuous Integration
Continuous Integration (CI) is a development practice that requires developers to integrate code into a shared repository several times a day. Each check-in is then verified by an automated build, allowing teams to detect problems early. By integrating regularly, you can detect errors quickly, and locate them more easily.
Reference: [Link 1](https://www.thoughtworks.com/continuous-integration)

#### DevOps
It aims at establishing a culture and environment where building, testing, and releasing software, can happen rapidly, frequently, and more reliably.
![Venn diagram showing DevOps](https://www.google.com/url?sa=i&rct=j&q=&esrc=s&source=imgres&cd=&cad=rja&uact=8&ved=0ahUKEwiwibHry9nNAhVCQo8KHakMC68QjRwIBw&url=https%3A%2F%2Fen.wikipedia.org%2Fwiki%2FDevOps&psig=AFQjCNFpEbIlarrhlMJuWhSh0Pg7fMVlTA&ust=1467714262369418)

#### Microservices
Microservices are a style of software architecture that involves delivering systems as a set of very small, granular, independent collaborating services. Microservices offer the following benefits:
- The services themselves are very simple, focusing on doing one thing well.
- Each service can be built using the best and most appropriate tool for the job, allowing developers to program in the tools and languages they want.
- Systems built in this way are inherently loosely coupled, thereby reducing development interdependencies.
- Multiple developers and teams can work relatively independently of each other under this model, removing constraints and accelerating development.
- They are a great enabler for continuous delivery, allowing frequent releases for customers, while keeping the rest of the system available and stable.

#### Twelve-Factor App
I. Codebase
II. Dependencies
III. Config
IV. Backing services
V. Build, release, run
VI. Processes
VII. Port binding
VIII. Concurrency
IX. Disposability
X. Dev/prod parity
XI. Logs
XII. Admin processes
Reference: [Link](http://12factor.net/)


#### Orchestration
Orchestration is largely the effect of automation or systems deploying elements of control theory.

###### Kubernates
Kubernetes is an open source orchestration system for Docker containers.
At a very high level, there are three key concepts:
- ***Pods*** are the smallest deployable units that can be created, scheduled, and managed. Its a logical collection of containers that belong to an application.
- ***Master*** is the central control point that provides a unified view of the cluster. There is a single master node that control multiple minions.
- ***Minion*** is a worker node that run tasks as delegated by the master. Minions can run one or more pods. It provides an application-specific “virtual host” in a containerized environment.
![Kubernetes Key Concept](http://blog.arungupta.me/wp-content/uploads/2015/01/kubernetes-key-concepts.png)

- ***Replication*** Controller is a resource at Master that ensures that requested number of pods are running on minions at all times.
- ***Service*** is an object on master that provides load balancing across a replicated group of pods.
- ***Label*** is an arbitrary key/value pair in a distributed watchable storage that the Replication Controller uses for service discovery.
- ***Kubelet***: Each minion runs services to run containers and be managed from the master. In addition to Docker, Kubelet is another key service installed there. It reads container manifests as YAML files that describes a pod. Kubelet ensures that the containers defined in the pods are started and continue running.
- Master serves RESTful Kubernetes API that validate and configure Pod, Service, and Replication Controller.
![Kubernetes Architecture](http://blog.arungupta.me/wp-content/uploads/2015/01/kubernetes-architecture.png)
Reference: [Link](http://blog.arungupta.me/key-concepts-kubernetes/)

#### Hypervisor
A ***hypervisor*** or ***virtual machine monitor (VMM)*** is a piece of computer software, firmware or hardware that creates and runs virtual machines. A computer on which a hypervisor runs one or more virtual machines is call a host machine; and each virtual machine is called a guest machine. The hypervisor presents the guest operating systems with a virtual operating platform and manages the execution of the guest operating systems.
![Type 1 and type 2 hypervisor](https://en.wikipedia.org/wiki/File:Hyperviseur.png)
